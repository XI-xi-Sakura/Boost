#pragma once

#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <mutex>
#include <unordered_map>
#include <boost/algorithm/string.hpp>
#include "log.hpp"


namespace ns_util{
    class FileUtil{
        public:
            static bool ReadFile(const std::string &file_path, std::string *out)
            {
                std::ifstream in(file_path, std::ios::in);
                if(!in.is_open()){
                    std::cerr << "open file " << file_path << " error" << std::endl;
                    return false;
                }

                std::string line;
                //如何理解getline读取到文件结束呢？？getline的返回值是一个&，while(bool), 本质是因为重载了强制类型转化
                while(std::getline(in, line)){ 
                    *out += line;
                }

                
                in.close();
                return true;
            }
    };
    class StringUtil{
        public:
            static void Split(const std::string &target, std::vector<std::string> *out, const std::string &sep)
            {
                //boost split
                boost::split(*out, target, boost::is_any_of(sep), boost::token_compress_on);
            }
    }; 
}
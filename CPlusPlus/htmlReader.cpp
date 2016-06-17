//
//  htmlReader.cpp
//  CPlusPlus
//
//  Created by Norio Egi on 6/15/16.
//  Copyright © 2016 Capotasto. All rights reserved.
//

#include "htmlReader.hpp"

void mainHtmlReader(){
    
    ifstream infile;
    string str;
    infile.open("inFile_HtmlRader.txt");
    if (infile.fail()){
        std::cerr << "File load has failed." << std::endl;
    }
    while (getline(infile, str)){
        string::iterator it = str.begin();
        for (it; it !=str.end(); it++) {
            //size_t lessThan = (*it)->

        }
        
        find(str.begin(), str.end(), '<');
        if (it != str.end()) {
            str.replace(it-str.end(), std::string("<").length(), "<<");
            it++;
        }
        
//        size_t f1 = str.find('<');
//        if (f1 != string::npos) {
//            str.replace(f1, std::string("<").length(), "<<");
//        }
//        size_t f2 = str.find('>');
//        if (f2 != string::npos) {
//            str.replace(f2, std::string(">").length(), ">>");
//        }
        cout << str << endl;
        
    }
    cout << "File input has done." << endl;

}

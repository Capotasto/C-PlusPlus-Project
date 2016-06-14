//
//  driverAssignment5.cpp
//  CPlusPlus
//
//  Created by Norio Egi on 6/10/16.
//  Copyright © 2016 Capotasto. All rights reserved.
//

#include "driverAssignment5.hpp"

enum type_menu_assingment5{
    ADD_FRONT=1,
    ADD_BACK,
    DEL_FRONT,
    DEL_BACK,
    PRINT_ASC,
    PRINT_DESC,
    OUT_SEC_FILE,
    IN_SEC_FILE,
    OUT_RANDOM_FILE,
    IN_RANDOM_FILE,
    QUIT
};


void displayMenuAssignment5(){
    cout << "Enter one of the following: "<< endl;
    cout << "  1.	Add a node to the front of the list "<< endl;
    cout << "  2.	Add a node to the back of the list "<< endl;
    cout << "  3.	Delete a node from the front of the list "<< endl;
    cout << "  4.	Delete a node from the back of the list "<< endl;
    cout << "  5.	Print a list forward"<< endl;
    cout << "  6.	Print the list backward"<< endl;
    cout << "  7.	Save the current list into a sequential file"<< endl;
    cout << "  8.	Load the list from the sequential file "<< endl;
    cout << "  9.	Save the list in a random file "<< endl;
    cout << "  10.	Load the list from the random file"<< endl;
    cout << "  11.	Quit this program"<< endl;

}

void writeToSequentialFile(List<string> &list){
    ofstream outfile;
    outfile.open("outFile assignment5.txt",ios::app);
    for (int i = 0; i < list.getSize(); i++) {
        string value = list.getValue(i);
        outfile << value << endl;
    }
    outfile << endl;
    cout << "File out has done." << endl;
    outfile.close();
}

void readFromSequentialFile(List<string> &list){
    ifstream infile;
    string str;
    infile.open("inFile assignment5.txt");
    if (infile.fail()){
        std::cerr << "File load has failed." << std::endl;
    }
    while (getline(infile, str)){
        list.insertAtFront(str);
    }
    
    cout << "File input has done." << endl;

}

void writeToRandomFile(List<string> &list){
    fstream outFile( "outFile assignment5 copy.dat", ios::in | ios::out | ios::binary | ios::app);
    
    if ( !outFile ){
        cerr << "File could not be opened." << endl;
        exit( 1 );
    }
    
    for (int i = 0; i < list.getSize(); i++) {
        // seek position in file of user-specified record
        outFile.seekp( (i+1) * sizeof(ListNode<string>));
        
        // write user-specified information in file
        ListNode<string>* node = list.getNode(i);
        if (node != NULL) {
            outFile.write(reinterpret_cast< const char * >(node),sizeof(ListNode<string>));
        }

    }
    
    
    
}

void readFromRandomFile(List<string> &list){
    ifstream inFile("outFile assignment5 copy.dat", ios::in);
    
    if (!inFile){
        cerr << "File could not be opened." << endl;
        exit(1);
    }
    while (inFile && !inFile.eof()){
        string str = "";
        //ListNode<string>* node(str);
        // read
        inFile.read(reinterpret_cast< char * >(&list),sizeof(ListNode<string>));
        //getline(reinterpret_cast< char * >(&list), sizeof(List<string>));
    }
    for (int i = 0; i < list.getSize(); i++) {
        cout << list.getValue(i) << " " << endl;
    }
}

void mainDriverAssignment5(){
    
    int choice=0;
    string inputStr;
    List<string> doublyList;
    
    while (choice != 11) {
        displayMenuAssignment5();
        cin >> choice;
        switch (choice) {
            case ADD_FRONT:
                cout << "Enter the string you wanna add into list."<< endl;
                getchar();
                getline(cin, inputStr);
                doublyList.insertAtFront(inputStr);
                break;
                
            case ADD_BACK:
                cout << "Enter the string you wanna add into list."<< endl;
                getchar();
                getline(cin, inputStr);
                doublyList.insertAtBack(inputStr);
                break;
            case DEL_FRONT:
                doublyList.removeFromFront();
                break;
            case DEL_BACK:
                doublyList.removeFromBack();
                break;
            case PRINT_ASC:
                doublyList.printAsc();
                break;
            case PRINT_DESC:
                doublyList.printDesc();
                break;
            case OUT_SEC_FILE:
                writeToSequentialFile(doublyList);
                break;
            case IN_SEC_FILE:
                readFromSequentialFile(doublyList);
                break;
            case OUT_RANDOM_FILE:
                writeToRandomFile(doublyList);
                break;
            case IN_RANDOM_FILE:
                readFromRandomFile(doublyList);
                break;
                
            case QUIT:
                exit(0);
                break;
  
            default:
                choice = QUIT;
                break;
        }
    }
}
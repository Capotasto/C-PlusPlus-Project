//
//  Assignment6Classes.hpp
//  CPlusPlus
//
//  Created by Norio Egi on 6/15/16.
//  Copyright © 2016 Capotasto. All rights reserved.
//

#ifndef Assignment6Classes_hpp
#define Assignment6Classes_hpp

#include <iostream>
using namespace std;

class Service{
public:
    Service(){
        mServiceName = "Device";
        mKeyboardFrag = false;
    }
    virtual string getServiceName(){
        return mServiceName;
    }
    
    virtual bool hasKeyboard(){
        return mKeyboardFrag;
    }
    
    virtual void can(){
        cout << "Can do something"<< endl;
    }
protected:
    string mProvider;
private:
    string mServiceName;
    string mVirtualProvider;
    bool mKeyboardFrag;
    
};

class Phone: public Service{
public:
    
    Phone(){
        mServiceName = "Phone";
        mKeyboardFrag = true;
    }
    string getServiceName()override{
        return mServiceName;
    }
    bool hasKeyboard()override {
        return mKeyboardFrag;
    }
    
    void can()override{
        cout << "Can make call"<< endl;
    }
    
    void placeCall(string number){
        cout << "Calling Number is " <<  number << endl;
    }
    
    void Receivecall(){
        cout << "Receive Call." << endl;
    }
    
    void setVoiceVolume(size_t volume){
        mVolume = volume;
    }
    
    void declineCall(){
        cout << "Declining Call." << endl;
    };
    
private:
    string mServiceName;
    size_t mVolume;//1~10
    bool mKeyboardFrag;

};

class Camera: public Service {
public:
    Camera(){
        mServiceName = "Camera";
        mKeyboardFrag = false;
    }
    string getServiceName()override{
        return mServiceName;
    }
    bool hasKeyboard()override {
        return mKeyboardFrag;
    }
    
    void can()override{
        cout << "Take a picture."<< endl;
    }
    
    void save(){}
    void load(){}
private:
    string mServiceName;
    bool mKeyboardFrag;

};

class VideoCamera: public Camera{
public:
    VideoCamera(){
        mServiceName = "VideoCamera";
        mKeyboardFrag = false;
}
    string getServiceName() override {
        return mServiceName;
    }
    bool hasKeyboard()override {
        return mKeyboardFrag;
    }
    
    void can()override{
        cout << "Can record video."<< endl;
    }
    void Record(){}
    void StopRecording(){}
private:
    string mServiceName;
    bool mKeyboardFrag;

};

class PictureCamera: public Camera{
public:
    PictureCamera(){
        mServiceName = "PictureCamera";
        mKeyboardFrag= false;
    }
    string getServiceName() override {
        return mServiceName;
    }
    bool hasKeyboard()override {
        return mKeyboardFrag;
    }
    
    void can()override{
        cout << "Can take a picture"<< endl;
    }
    void TakePicture(){}
private:
    string mServiceName;
    bool mKeyboardFrag;

};

class Player: public Service{
public:
    Player(){
        mServiceName = "Player";
        mKeyboardFrag = false;
    }
    string getServiceName() override {
        return mServiceName;
    }
    
    bool hasKeyboard()override {
        return mKeyboardFrag;
    }
    
    void can()override{
        cout << "Can play Music or Movie"<< endl;
    }
    void Play(){}
    void StopPlaying(){}
private:
    string mServiceName;
    bool mKeyboardFrag;

};

class Mp3Player: public Player{
public:
    Mp3Player(){
        mServiceName = "Mp3Player";
        mKeyboardFrag = false;
    }
    string getServiceName() override {
        return mServiceName;
    }
    bool hasKeyboard()override {
        return mKeyboardFrag;
    }
    
    void can()override{
        cout << "Can play music."<< endl;
    }
private:
    string mServiceName;
    bool mKeyboardFrag;

};

class VideoPlayer: public Player{
public:
    VideoPlayer(){
        mServiceName = "VideoPlayer";
        mKeyboardFrag = false;
    }
    string getServiceName() override {
        return mServiceName;
    }
    bool hasKeyboard()override {
        return mKeyboardFrag;
    }
    
    void can()override{
        cout << "Can play video"<< endl;
    }
private:
    string VideoFile;
    string mServiceName;
    bool mKeyboardFrag;
};

class Messaging: public Service{
public:
    Messaging(){
        mServiceName = "Messaging";
        mKeyboardFrag = false;
    }
    string getServiceName() override {
        return mServiceName;
    }
    bool hasKeyboard()override {
        return mKeyboardFrag;
    }
    
    void can()override{
        cout << "Cand Send the messages."<< endl;
    }
    void Send(){}
    void Receive(){}
private:
    string mServiceName;
    bool mKeyboardFrag;

};

class SmallMessaging: public Messaging{
public:
    SmallMessaging(){
        mServiceName = "SMS";
        mKeyboardFrag = true;
    }
    string getServiceName() override {
            return mServiceName;
    }
    bool hasKeyboard()override {
        return mKeyboardFrag;
    }
    
    void can()override{
        cout << "Can send the message using phone number."<< endl;
    }
private:
    string mServiceName;
    string text;
    bool mKeyboardFrag;

};

class MultimediaMessaging: public Messaging{
public:
    MultimediaMessaging(){
        mServiceName = "MMS";
        mKeyboardFrag = true;
    }
    string getServiceName() override {
        return mServiceName;
    }
    bool hasKeyboard()override {
        return mKeyboardFrag;
    }
    
    void can()override{
        cout << "Can send some message."<< endl;
    }
private:
    string mServiceName;
    string MMFilename;
    bool mKeyboardFrag;
};

class Gameconsole: public Service{
public:
    Gameconsole(){
        mServiceName = "Games";
        mKeyboardFrag = true;
    }
    string getServiceName() override {
        return mServiceName;
    }
    bool hasKeyboard()override {
        return mKeyboardFrag;
    }
    
    void can()override{
        cout << "Can Choose Game."<< endl;
    }
    void play(){}
    void Stop(){}
    void Savegame(){}
    void Loadgame(){}
private:
    string mServiceName;
    bool mKeyboardFrag;
};

class WebBrowser: public Service{
public:
    WebBrowser(){
        mServiceName = "HTTPClient";
        mKeyboardFrag = true;
    }
    string getServiceName() override {
        return mServiceName;
    }
    bool hasKeyboard()override {
        return mKeyboardFrag;
    }
    
    void can()override{
        cout << "Can Search the internet."<< endl;
    }
    void go(string url){}
    void cache(){}
    void OpenNewTab(){}

private:
    string mServiceName;
    bool mKeyboardFrag;

};

class Dayplanner: public Service{
public:
    Dayplanner(){
        mServiceName = "Planner";
        mKeyboardFrag = false;
    }
    string getServiceName() override {
        return mServiceName;
    }
    bool hasKeyboard()override {
        return mKeyboardFrag;
    }
    
    void can()override{
        cout << "What is this? It's like remider or calender something like that."<< endl;
    }
    void AddEntry(){}
    void ModifyEntry(){}
    void DeleteEntry(){}
private:
    string mServiceName;
    bool mKeyboardFrag;

};

class EmailClient: public Service{
public:
    EmailClient(){
        mServiceName = "Email";
        mKeyboardFrag= false;
    }
    string getServiceName() override {
        mServiceName = "Email";
        return mServiceName;
    }
    bool hasKeyboard()override {
        return mKeyboardFrag;
    }
    
    void can()override{
        cout << "Can send mail.And check mail."<< endl;
    }
    void Send(){}
    void Receive(){}
    void Reply(){}
    void Forward(){}
private:
    string mServiceName;
    bool mKeyboardFrag;
    

};

class Gmail: public EmailClient{
public:
    Gmail(){
        mServiceName = "Gmail";
        mKeyboardFrag = true;
    }
    string getServiceName() override {
        return mServiceName;
    }
    bool hasKeyboard()override {
        return mKeyboardFrag;
    }
    
    void can()override{
        cout << "Can send mail, it's useful!"<< endl;
    }
private:
    string mServiceName;
    string SMTP;
    string POP;
    string IMAP;
    bool mKeyboardFrag;

};

class Yahoo: public EmailClient{
public:
    Yahoo(){
        mServiceName = "Yahoo";
        mKeyboardFrag = false;
    }
    string getServiceName() override {
        return mServiceName;
    }
    bool hasKeyboard()override {
        return mKeyboardFrag;
    }
    
    void can()override{
        cout << "Can send mail, Have alot of spam!"<< endl;
    }
private:
    string mServiceName;
    string SMTP;
    string POP;
    string IMAP;
    bool mKeyboardFrag;

};


#endif /* Assignment6Classes_hpp */

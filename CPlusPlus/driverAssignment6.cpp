//
//  driverAssignment6.cpp
//  CPlusPlus
//
//  Created by Norio Egi on 6/16/16.
//  Copyright © 2016 Capotasto. All rights reserved.
//

#include "driverAssignment6.hpp"

void mainDriverAssignment6(){

    vector<Service*> serviceVector;
    serviceVector.push_back(new Service());
    serviceVector.push_back(new Phone());
    serviceVector.push_back(new Camera());
    serviceVector.push_back(new VideoCamera());
    serviceVector.push_back(new PictureCamera());
    serviceVector.push_back(new Player());
    serviceVector.push_back(new Mp3Player());
    serviceVector.push_back(new VideoPlayer());
    serviceVector.push_back(new Messaging());
    serviceVector.push_back(new SmallMessaging());
    serviceVector.push_back(new MultimediaMessaging());
    serviceVector.push_back(new Gameconsole());
    serviceVector.push_back(new WebBrowser());
    serviceVector.push_back(new Dayplanner());
    serviceVector.push_back(new EmailClient());
    serviceVector.push_back(new Gmail());
    serviceVector.push_back(new Yahoo());
    for (int i= 0; i < serviceVector.size(); i++) {
        cout << serviceVector[i]->getServiceName() << endl;
        cout << "Does it have Keybord?: "<<  ((serviceVector[i]->hasKeyboard()) ? "True":"False") << endl;
        serviceVector[i]->can();
        cout << "------------------------"<< endl;
    }
}
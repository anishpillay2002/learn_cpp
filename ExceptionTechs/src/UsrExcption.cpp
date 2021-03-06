/*
 * UsrExcption.cpp
 *
 *  Created on: Jan 22, 2019
 *      Author: anishpillay
 */

#include <iostream>
#include <exception>
using namespace std;

void goesWrong(){
	bool error1Detected  = true;
	bool error2Detected = false;

	if (error1Detected) {
		throw bad_alloc();
	}

	if (error2Detected){
		throw exception();
	}


}

int main(){
	cout<<"Started"<<endl;
	try{
		goesWrong();
	}
	catch(bad_alloc &e){  // bad_alloc is child of exception class, so polymorphism comes into play and you have to catch child subclasses before parent classes
		cout<<"Catching bad_alloc -> "<<e.what()<<endl;
	}
	catch(exception &e){
		cout<<"Catching exception -> "<<e.what()<<endl;
	}

	cout<<"Ended"<<endl;
	return 1;
}



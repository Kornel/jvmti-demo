#include <jvmti.h>
#include <iostream>

using namespace std;

JNIEXPORT jint JNICALL Agent_OnLoad(JavaVM *vm, char *options, void *reserved) {	
	cout << "jvmti-demo loaded" << endl;
	return 0;
}

JNIEXPORT void JNICALL Agent_OnUnload(JavaVM *vm) {

}

#include "stdafx.h"  
#include <iostream>  
#include <windows.h>  

int main() {  
    // Create necessary directory  
    const char* path = "C:\Program Files (x86)\Avalanche\Versions";  
    CreateDirectoryA(path, NULL);  
    
    // Code to extract 7z file would go here  
    std::cout << "Bootstrapper initialized!" << std::endl;  
    return 0;  
}
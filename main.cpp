


#include <iostream>




#include "ImGuiFiles/imgui.h"

// TURN OFF ALL LINK-TIME-OPTIMIZATION (OFF BY DEFAULT)
// ON MY SYSTEM ON MSVC LARGE translationunit.cpp ENDS UP BEING 9MB

int function_from_another_obj_file();
int main()
{
	
	std::cout << function_from_another_obj_file(); 
	// CALLING A FUNCTION DEFINED IN ANOTHER TRANSLATION UNIT, DOESN'T PLACE THE ENTIRE OBJ FILE INTO EXECUTABLE LIKE WHAT EVERYONE SAYS HAPPENS
	

	//ImGui::CreateContext(); // UNCOMMENTING THIS INCREASES EXECUTABLE SIZE FROM 34KB TO 58KB

	//ImGui::NewFrame(); // UNCOMMENTING THIS INCREASES EXECUTABLE SIZE FROM 58KB TO 180KB


	// CONCLUSION: THE ENTIRE OBJ FILE (ALL SYMBOL DEFINITIONS) ARE NOT PUT INTO THE EXECUTABLE BY DEFAULT. IT'S NOT ALL OR NOTHING
	// THIS IS WITHOUT FUNCTION-LEVEL LINKING OR LINK-TIME-OPTIMIZATION ENABLED, THIS IS BY DEFAULT
	
	// EXACTLY THE SAME THING HAPPENS WITH THE MSVC OR THE CLANG TOOLCHAIN
	// ie., calling function_from_another_obj_file DOESN'T PULL IN THE ENTIRE OBJ FILE
	// UNCOMMENTING THE FIRST FUNCTION CALL GROWS THE EXECUTABLE A LITTLE
	// UNCOMMENTING THE SECOND FUNCTION CALL GROWS THE EXECUTABLE A LITTLE



	return 0;
}
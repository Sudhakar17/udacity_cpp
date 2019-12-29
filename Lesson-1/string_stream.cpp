/*Goal: practice using stringstream
/*Goal: practice getting string inputs and 
 **converting them to numeric variables using
 **stringstream.
 **
 **Prompt the user for the length of a room. 
 **Then prompt for the width of the room.
 **Print out the area of the room. 
 */

 #include <iostream>
 #include <sstream>
 #include <string>
 
 int main()
 {
     float area;
     float length;
     float width;
     std::string strlength, strwidth;
     
     std::getline(std::cin, strlength);
     std::getline(std::cin, strwidth);
     std::stringstream(strlength) >> length ;
     std::stringstream(strwidth) >> width ;
     area = length * width ;
     std::cout<<area<<"\n";
     
    
 }
/*
 Project 4 - Part 1 / 9
 video: Chapter 2 Part 7
 Returning Values tasks 

 Create a branch named Part1

 Purpose:  This project will take you through the process of writing a class that wraps a numeric type, beginning with writing simple member functions and ending with a fully templated class with lots of functionality. 
 
 1) write 3 UDTs named FloatType, DoubleType, IntType.

 
 2) give each UDT the following member functions:
        add( lhs, rhs );
        subtract( lhs, rhs );
        multiply( lhs, rhs );
        divide( lhs, rhs );

       lhs is the left-hand-side of the operation, rhs is the right-hand-side
       e.g. x = 2 + 3
              '2' is the lhs
              '3' is the rhs
              '+' is the operation

 3) implement the appropriate action in the member function. 
         a) Be aware that floating point division by 0 is legal, but integer division by 0 will crash your program.  
         b) Handle this possible input when you write your divide() functions.
         c) you should warn the user if they're doing floating-point-division-by-zero but not prevent the division from happening
         d) you should warn AND prevent the division from happening if it is an integer-division-by-zero.
 
 4) make them return the correct primitive type. e.g. if you're implementing the FloatType::add function, your implementation would start like this:
        float FloatType::add( float lhs, float rhs )
 
 5) declare a few instances of each class in main() and call the member functions with the appropriate arguments.
        FloatType ft;
        auto result = ft.add(3.2f, 23.f );
 
 6) print out those results using std::cout:
        std::cout "result of ft.add(): " << result << std::endl;
 
 7) After you finish defining each type/function, click the [run] button.  Clear up any errors or warnings as best you can.
 */
#include <iostream>

 struct FloatType
 {
     float add( float lhs, float rhs)
     {
         float x = lhs + rhs;
         return x;
     }

     float subtract( float lhs, float rhs)
     {
         float x = lhs - rhs;
         return x;
     }
     float multiply( float lhs, float rhs)
     {
         float x = lhs * rhs;
         return x;
     }
     float divide( float lhs, float rhs)
     {
         if(rhs == 0.0f) std::cout << "Warning!  Dividing by Zero " << std::endl;
         float x = lhs / rhs;
         return x;
     }
 };



 struct DoubleType
 {
     double add( double lhs, double rhs)
     {
         double x = lhs + rhs;
         return x;
     }
     double subtract( double lhs, double rhs)
     {
         double x = lhs - rhs;
         return x;
     }
     double multiply( double lhs, double rhs)
     {
         double x = lhs * rhs;
         return x;
     }
     double divide( double lhs, double rhs)
     {
         double x = lhs / rhs;
         return x;
     }
 };


struct IntType
{
     int add( int lhs, int rhs)
     {
         int x = lhs + rhs;
         return x;
     }

     int subtract( int lhs, int rhs)
     {
         int x = lhs - rhs;
         return x;
     }

     int multiply( int lhs, int rhs)
     {
         int x = lhs * rhs;
         return x;
     }

     int divide( int lhs, int rhs)
     {  
        if(rhs == 0) 
        {
            std::cout << "Warning!  Dividing by Zero. Abort! " << std::endl;
            return 0;
        }
        else 
        {
            int x = lhs / rhs;
            return x;
        }
         
     }

};
/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */


int main()
{
    //Instanciation of UDTs
   
    //Floats
    FloatType ft;
    auto result = ft.subtract( 3.2f, 23.f );
    std::cout << "result of ft.subtract is " << result << std::endl;
    FloatType fType;
    auto result2 = fType.add( 3.82f, 203.f );
    std::cout << "result of fType.add is " << result2 << std::endl;
    FloatType fType2;
    auto result3 = fType2.multiply( 13.2f, 523.f );
    std::cout << "result of fType2.multiply is " << result3 << std::endl;

    //Doubles
    DoubleType dt;
    auto answer = dt.subtract( 123.4, 567.89 );
    std::cout << "result of dt.subtract is " << answer << std::endl;
    DoubleType dType;
    auto answer2 = dType.multiply( 1923.4, 5167.89 );
    std::cout << "result of dType.multiply is " << answer2 << std::endl;
    DoubleType dType2;
    auto answer3 = dType2.divide( 9123.4, 0.0 );
    std::cout << "result of dType2.divide is " << answer3 << std::endl;

    //integers
    IntType it;
    auto conclusion = it.add( 1230, 567 );
    std::cout << "result of it.add is " << conclusion << std::endl;
    IntType iType;
    auto conclusion2 = iType.divide( 1230, 567 );
    std::cout << "result of iType.divide is " << conclusion2 << std::endl;
    IntType iType2;
    auto conclusion3 = iType2.divide( 1230, 0 );
    std::cout << "result of iType2.divide is " << conclusion3 << std::endl;

    // testing
    std::cout << "----------------------------" << std::endl;
    std::cout << "TESTING AREA " << std::endl;
    std::cout << "float add " << fType.add( 10.0f, 23.2f ) << std::endl;
    std::cout << "float divide " << fType.divide( 5.5f, 0.0f ) << std::endl;

    std::cout << "Double subtract " << dType.subtract( 6.578475, 33.6512312 ) << std::endl;
    std::cout << "Double divide " << dType.divide( 100555.5909288, 0.0 ) << std::endl;

    std::cout << "integer multiply " << iType.multiply( 5, 0 ) << std::endl;
    std::cout << "integer divide " << iType.divide( 5, 0 ) << std::endl;

    std::cout << "good to go!" << std::endl;
}

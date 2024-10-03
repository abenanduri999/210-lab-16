#include<iostream>
#include<iomanip>

using namespace std; 

class Color {

    private:
       //private variables only accessible by the class
        int Red; 
        int Green; 
        int Blue; 

    public: 

        //default constructor
        Color() { Red = 1; Green = 1; Blue = 1; }

        // constructor 
        Color (int r , int g) { Red = r; Green = g; Blue = 5; }
        Color (int r) { Red = r; Green = 6; Blue = 7; }
        Color( int r, int g, int b) { Red  = r; Green = g; Blue = b; }
        // getters and setters, functions accessbile by main function
        void setRed(int r) { Red = r; }
        void setGreen(int g) { Green = g; }
        void setBlue(int b) { Blue = b; }
        int getRed() const { return Red; }  // I was taught to label accessors as const 
        int getGreen() const { return Green; }
        int getBlue() const { return Blue; }

        void print() 
         {
            
            cout<<endl; // the output was printed weirdly in the terminal so I added this
            cout<<setw(10)<<left<<Red<<setw(10)<<left<<Green<<setw(10)
            <<left<<Blue<<endl<<endl; 

         }

};

int main() {
 

    Color c1 (32, 130, 250); 
    Color c2 (46, 83); 
    Color c3 (); 

   
    cout<<setw(10)<<left<<"RED"<<setw(10)<<left<<
    "BLUE"<<setw(10)<<left<<"GREEN"<<endl<<endl; 

    c1.print();
    c2.print();
    c3.print();

    return 0;    

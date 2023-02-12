/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <string>

using namespace std;

    
    
    class Emp{
        public:
        string name;
        int sal;
        
        
        Emp(string name , int sal){
            
            this -> name=name;
            this->sal=sal;
            
        }
        
            void pd(){
            cout << "Emp details .." << this->name << endl << this->sal << endl ;

    }
        
    };
    
    
    


// int
// add (int a, int b)
// {

//   int c;
//   c = a + b;


//       return c;
    
//     }
    
    int main ()
    {
      // cout<<"Hello World";
    
      // int age;
      // cin >> age;
    
    
      // if(age==23){
    
      //     cout << "bada admi ";
    
      // }else{
      //     cout << "thik admi ";
      // }
    
      // int index=0;
      // while(index<=11111134){
    
      //     cout << "I m at Index : " << index <<endl;
    
    
      //     index = index+1;
    
      // }
    
      // for(int i=0;i<=10;i++){
    
      //     cout << "The vlaue is i is : " << i <<endl ;
    
      // }

    //   int a, b;
    //   cin >> a;
    //   cin >> b;
    //   cout << "the add value of function is : " << add (a, b);
    
    
    //cout << "the maim";
    
    // int arr[]= {2,3,4};
    // cout << arr[1];
    
    
    // int marks[4];
    
    // for(int i=0 ;i<=4;i++){
        
    //     cout << "Enter the Marks of student....";
        
    //     cin >> marks[i];
        
    // }
    
    
    // string s="Nishant";
    // cout << s <<endl;
    // cout << s.length();
    
    
    // int a =34;
    // int* name;
    // name= &a;
    // cout << *name;
    
    
    Emp emp ("rajababu",1234);
    
   // emp.name="mao";
   // emp.sal=123;
    
   // cout << "Emp details .." <<emp.name << endl << emp.sal << endl ;
    emp.pd();
    

  return 0;
}

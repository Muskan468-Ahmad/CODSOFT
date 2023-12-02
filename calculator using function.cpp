#include<iostream>
 
using namespace std;
 
int add(int a,int b); 
int substract(int a, int b);
int multiply(int a, int b);
float divide(float a, float b);
 
int main()
{
	int choice;
	float num1;
	float num2;
	char con;
	do
	{
		cout<<"Choose Operation\n";
		cout<<"\t1.Add\n";
		cout<<"\t2.Subtract\n";
		cout<<"\t3.Multiply\n";
		cout<<"\t4.Divide\n";
		cin>>choice;
		cout<<"Enter two integer numbers: ";
		cin>>num1>>num2;
		cout<<endl;
		switch(choice)
		{		
			case 1:
				cout<<"Result: "<<add(num1,num2);
				break;
		 	case 2:
	 			cout<<"Result: "<<substract(num1, num2);
		 		break;
 			case 3:
	 			cout<<"Result: "<<multiply(num1, num2);
		 		break;
 			case 4:
	 			cout<<"Result: "<<divide(num1, num2);
		 		break;
 			default:
	 			cout<<"invalid";
        }
                  
		cout<<"\nPress y to continue or anyother key to exit: ";
    	cin>>con;
	}while(con == 'y');

}

int add(int a,int b)
{
    return(a+b);
}
 
int substract(int a, int b)
{
    return(a-b);
}
 
int multiply(int a, int b)
{
    return(a*b);
}
float divide(float a,float b)
{
	
    return a/b;
}


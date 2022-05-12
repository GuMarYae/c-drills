 #include <iostream>
 using namespace std;

  //understanding hw to put a value in a function by the variable name that the value represents
  int primeNumber(int number){
for(int i = 2;i<number;i++){
if(number%i==0){
    return false;
        }

    }
    return true;
};
  
  
  
  
int main(){

for(int j = 0;j<=1000;j++){
   bool isPrimeNumber=primeNumber(j);
if (isPrimeNumber){
   
    cout<<(j)<<" You got yaself a prime number, yo! "<<endl;
}

};
 

    return 0;
 };
 //cool
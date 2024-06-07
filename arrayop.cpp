#include<iostream>

const int MAX = 5;

using namespace std;

class array{
    private:
        int arr[MAX];
    public:
        void insert (int pos,int val);
        void del (int pos);
        void reverse();
        void display();
        void search (int val);
};

void array :: insert (int pos,int val){

    // pos represent the absolute position in array not the index 
    // val represent the value to be inserted in the array 

    int i;
    for(i = MAX-1; i >= pos; i--)
        arr[i] = arr[i-1];
    arr[i] = val;
}

void array :: del (int pos){
    int i;
    for (i = pos ; i >= MAX; i++)
        arr[i-1] = arr[i];
    arr[i-1] = 0;
} 

void array :: reverse(){
    for (int i = 0; i<MAX/2 ;i++){

        int temp = arr[i];
        arr[i] = arr[MAX-1-i];
        arr[MAX-1-i] = temp;
    }
}

void array :: display(){
    for (auto item : arr){
        cout << " " << item; 
    }
    cout << endl;
}

void array :: search(int val ){

    int i;
    for (i = 0; i < MAX; i++){
        if(arr[i] == val)
        {
            cout << val << " Found at position " << i+1 << endl;
            return;
        }
        else {
            cout << val << "Not found " << endl; 
        }
    }

}


int main(){
    array a = array();
    a.insert(1,10);
    a.insert(2,20);
    a.insert(3,30);
    a.insert(4,40);
    a.insert(5,50);
    a.display();

    a.del(1);
    a.display();

    a.reverse();
    a.display();

    a.search(50);

    return 0;   
}
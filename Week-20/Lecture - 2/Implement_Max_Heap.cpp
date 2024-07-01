#include <iostream>
#include<vector>
using namespace std;

class Max_Heap
{
public:
    vector<int> arr;
    int idx;

    Max_Heap(int x)
    {
        idx = 1;
        
        for(int i=0 ; i<x ; i++){
            arr.push_back(0);
        }
    }

    int top()
    {
        return arr[1];
    }

    void push(int x)
    {
        arr[idx] = x;
        int i = idx;
        idx++;

        while (i != 1)
        {
            if (arr[i] > arr[i / 2])
            {
                swap(arr[i], arr[i / 2]);
            }
            else
                break;
            i = i / 2;
        }
    }

    void pop()
    {
        if (idx == 1)
        {
            cout << "Empty Heap";
        }

        else
        {
            arr[1] = arr[idx - 1];
            idx--;
            int i = 1;

            while (i < idx)
            {
                int left = 2 * i;
                int right = 2 * i + 1;

                if ((left < idx) && (arr[left] > arr[right]) && (arr[i] < arr[left]))
                {
                    swap(arr[i], arr[left]);
                    i = left;
                }
                else if ((right < idx) && (arr[left] < arr[right]) && (arr[i] < arr[right]))
                {
                    swap(arr[i], arr[right]);
                    i = right;
                }
                else
                    break;
            }
        }
    }

    int size()
    {
        return idx - 1;
    }

    void display()
    {
        for (int i = 1; i < idx; i++)
        {
            cout << arr[i] << " ";
        }
    }
};

int main()
{
    Max_Heap pq(50);
    pq.push(10);
    pq.push(20);
    pq.push(11);
    pq.push(30);
    pq.push(40);
    pq.push(12);
    pq.push(4);
    pq.push(2);

    cout <<"Size : "<< pq.size() << endl;
    cout <<"Top : "<< pq.top() << endl;
    cout<<"Display : ";
    pq.display();

    cout << endl<<endl;

    pq.pop();

    cout <<"Size : "<< pq.size() << endl;
    cout <<"Top : "<< pq.top() << endl;
    cout<<"Display : ";
    pq.display();
}
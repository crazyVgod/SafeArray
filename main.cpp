#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>
#include<string>
#include<cstdlib>
#include<algorithm>
#include<stack>
using namespace std;

class SafeArray{
	private:
        int *data;
        int count;
    public:
        int overA(int index);
        void showi();
        SafeArray(int cap)
        {
                data = new int [cap];
                for(int i=0;i<cap;i++)
                {
                        data[i]=i+1;
                }
                count=cap;
        }
        ~SafeArray()
        {
                delete [] data;
        }

};

int SafeArray::overA(int index)
{
        if(index<0||index>=count)
        {
                cout<<"数组下标越界！"<<endl;
                return -1;
        }
        else
            return data[index];
}

void SafeArray::showi()
{
        for(int i=0;i<count;i++)
        {
                cout<<data[i]<<" ";
        }
        cout<<endl;
}

int main()
{
        SafeArray *sa = new SafeArray(10);
        (*sa).showi();
        cout<<(*sa).overA(-1)<<endl;
        cout<<(*sa).overA(3)<<endl;
        return 0;
}


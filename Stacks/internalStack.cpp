
#include <iostream>
#include <stack>
using namespace std;

int main(){

    stack<int> st;

    st.push(2);
    st.push(8);
    st.push(9);

    st.pop();

    cout<<st.top()<<endl;

    st.push(0);
    st.push(22);

    cout<<st.top()<<endl;

    st.pop();

    cout<<st.top()<<endl;
    cout<<st.empty()<<endl;

    return 0;

}

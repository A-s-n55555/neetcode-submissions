class Solution {
public:
    int calPoints(vector<string>& operations) {
        int n = operations.size();
        stack<int> st;
        for(const auto& str:operations){
            if(str =="C") st.pop();
            else if(str =="D"){
                int x = st.top();
                st.push(2*x);
            }
            else if(str =="+"){
                int a = st.top();
                st.pop();
                int b = st.top();
                st.push(a);
                st.push(a+b);
            }
            else{
                st.push(stoi(str));
            }
        }
        int total = 0;
        while(!st.empty()){
            total += st.top();
            st.pop();
        }
        return total;
    }
};
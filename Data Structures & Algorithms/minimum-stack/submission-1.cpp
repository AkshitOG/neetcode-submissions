class MinStack {
    long long m;
    stack<long long>st;
public:

    MinStack() {}
    
    void push(int val) {
        if (st.empty())
        {
            st.push(val);
            this->m = val;
        }
        else if (val<m)
        {
            st.push(2LL*val - m);
            this->m = val;
        }
        else st.push(val);
    }
    
    void pop() {
        if (st.top() < m)
        {
            m = 2LL*m - st.top();
        }

        st.pop();
    }
    
    int top() {
        if (st.top() < m) return static_cast<int>(m);
        return static_cast<int>(st.top());
    }
    
    int getMin() {
        return static_cast<int>(m);
    }
};

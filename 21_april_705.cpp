class MyHashSet {
public:
    /** Initialize your data structure here. */
  set<int> st;
    //   uno
    MyHashSet()
    {
    }

    void add(int key)
    {
        // st[key]++;
        st.insert(key);
    }

    void remove(int key)
    {
        if (st.find(key) != st.end())
        {
            //   st[key]--;
            st.erase(key);
        }
    }

    /** Returns true if this set contains the specified element */
    bool contains(int key)
    {
        if (st.find(key) != st.end())
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */

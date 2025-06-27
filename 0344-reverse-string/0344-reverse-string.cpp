class Solution {
public:
   void reverseString(vector<char>& s) {
    int left = 0;
    int right = s.size() - 1;
    
    // Reverse in-place using two-pointer approach
    cout<<"[";
    while(left<right)
    {
        swap(s[left],s[right]);
        left++;
        right--;
        cout<<"\""<<s[left]<<"\"";
        cout<<",";
    }
    cout<<"]";
    
    
    }
};




    
    
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
       // int min=0,max=0;
        ListNode* prev=head;
        vector<int> s;
        int k=0;
        for(ListNode* temp=head->next;temp->next!=NULL;temp=temp->next){
            int a=prev->val;
            int b=temp->val;
            int c=temp->next->val;
            if((b>c && b>a) || (b<c && b<a)){
                s.push_back(k);
            }
            prev=temp;
            k++;
        }
        int  min=999999;
       /* for(int i=0;i<s.size();i++){
            for(int j=0;j<s.size();j++){
                if(i==j){
                    continue;
                }
        if(abs(s[i]-s[j])<min){
            min=abs(s[i]-s[j]);
        }
        if(abs(s[i]-s[j])>max){
            max=abs(s[i]-s[j]);
        }
            }
        }*/
        if(s.size()<2){
       return {-1,-1};
        }
        sort(s.begin(),s.end());
         for(int i=1;i<s.size();i++){
            if(abs(s[i]-s[i-1])<min){
            min=abs(s[i]-s[i-1]);
        }
       }
        int  max = s.back() - s.front();
        vector<int> vec;
        vec.push_back(min);
        vec.push_back(max);
        return vec;
    }

};
class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if (p==NULL&& q==NULL) return true;
        if(p==NULL || q==NULL) return false; 
        if  (p->val!=q->val){
            return false;
        }
    
        bool leftanswer=isSameTree(p->left,q->left);
        if (leftanswer==false) return false; 
        
        bool rightanswer=isSameTree(p->right,q->right);
        if (rightanswer==false) return false; 
        
        return true;


        
        
    }
};
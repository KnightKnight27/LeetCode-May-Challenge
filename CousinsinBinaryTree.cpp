class Solution 
{
    public:
        bool isCousins(TreeNode* root, int x, int y) 
        {
            queue< pair<TreeNode * ,TreeNode *> > list;
            TreeNode * par=new TreeNode(-1);
            list.push(make_pair(root,par));
            TreeNode *A=NULL;
            TreeNode *B=NULL;
            while(!list.empty())
            {
                int size=list.size();
                while(size--)
                {
                    pair<TreeNode *,TreeNode * > temp=list.front();
                    list.pop();  
                    if(temp.first->left)
                    {
                        list.push(make_pair(temp.first->left,temp.first));
                    }
                    if(temp.first->right)
                    {
                        list.push(make_pair(temp.first->right,temp.first));
                    }
                    if(temp.first->val==x)
                    {
                        A=temp.second;
                    }
                    if(temp.first->val==y)
                    {
                        B=temp.second;
                    }
                    if(A!=NULL and B!=NULL)
                    {
                        break;
                    }
                }
            if(A!=NULL && B!=NULL)
                return A!=B;
            if((A!=NULL and B==NULL) || (A==NULL and B!=NULL))
            {
                return false;
            }
            }
            return false;
        }
}

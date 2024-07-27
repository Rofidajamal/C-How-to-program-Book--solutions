#include <iostream>

using namespace std;

template <class T>
struct node{
    T info;
    node<T> *rlink;
    node<T> *llink;


};

template <class T>
class BinaryTree{
private:

    void inorder(node<T> *p) const{
        if (p != NULL){
            inorder(p->llink);
            cout << p->info << " ";
            inorder(p->rlink);
        }
    }

    void preorder(node<T> *p) const{
    if (p != NULL){
        cout << p->info << " ";
        preorder(p->llink);
        preorder(p->rlink);
    }
    }

    void postorder(node<T> *p) const
    {
        if (p != NULL){
            postorder(p->llink);
            postorder(p->rlink);
            cout << p->info << " ";
        }
    }

    void destroy(node<T>* &p){
        if (p != NULL){
            destroy(p->llink);
            destroy(p->rlink);
            delete p;
            p = NULL;
        }
      }

    void copyTree(node<T>* &copiedTreeRoot, node<T>* otherTreeRoot)
    {
        if (otherTreeRoot == NULL)
            copiedTreeRoot = NULL;
        else
        {
            copiedTreeRoot = new node<T>;
            copiedTreeRoot->info = otherTreeRoot->info;
            copyTree(copiedTreeRoot->llink, otherTreeRoot->llink);
            copyTree(copiedTreeRoot->rlink, otherTreeRoot->rlink);
        }
    }

    int height(node<T> *p) const
    {
        if (p == NULL)
            return 0;
        else
            return 1 + max(height(p->llink), height(p->rlink));
    }






    /*
        void destroy(binaryTreeNode<elemType>* &p);
        //Function to destroy the binary tree to which p points.
        //Postcondition: p = NULL

        int nodeCount(binaryTreeNode<elemType> *p) const;
        //Function to return the number of nodes in the binary
        //tree to which p points
        int leavesCount(binaryTreeNode<elemType> *p) const;
        //Function to return the number of leaves in the binary
        //tree to which p point
    */


protected:
    node<T> *root;

public:
    bool isEmpty() const {
    return (root == NULL);
    }

    BinaryTree(){
        root = NULL;
    }

    BinaryTree(const node<T>& otherTree){
        if (otherTree.root == NULL) //otherTree is empty
            root = NULL;
        else
            copyTree(root, otherTree.root);
    }

    void inorderTraversal() const{
        inorder(root);
    }

    void preorderTraversal() const{
        preorder(root);
    }

    void postorderTraversal() const{
        postorder(root);
    }

    int treeHeight() const{
    return height(root);
    }

    destroyTree()
    {
        destroy(root);

    }

    ~BinaryTree(){
        destroy(root);
    }

    const node<T>& operator= (const node<T>& otherTree)
    {
        if (this != &otherTree) //avoid self-copy
        {
            if (root != NULL) //if the binary tree is not empty,
            //destroy the binary tree
                destroy(root);
            if (otherTree.root == NULL) //otherTree is empty
                root = NULL;
            else
                copyTree(root, otherTree.root);
        }
        return *this;
    }

};


class BinarySearchTree(){
private:
    void deleteFromTree(node<T>* &p){
        node<T> *current;//pointer to traverse the tree
        node<T> *trailCurrent; //pointer behind current
        node<T> *temp; //pointer to delete the node
        if (p == NULL)
            cerr << "Error: The node to be deleted is NULL." << endl;
        else if(p->llink == NULL && p->rlink == NULL) //leaf
        {
            temp = p;
            p = NULL;
            delete temp;
        }
        else if(p->llink == NULL) //right subtree
        {
            temp = p;
            p = temp->rlink;
            delete temp;
        }
        else if(p->rlink == NULL) //left subtree
        {
            temp = p;
            p = temp->llink;
            delete temp;
        }
        else //right and left has elements
        {
            current = p->llink; // to get the largest element in the left sub tree
            trailCurrent = NULL;
            while (current->rlink != NULL)
            {
                trailCurrent = current;
                current = current->rlink;
            }//end while
            p->info = current->info; //ad the largest info to the info of the node that will be deleted
            if (trailCurrent == NULL) //current did not move;
            //current == p->llink; adjust p
                p->llink = current->llink;
            else
                trailCurrent->rlink = current->llink;
            delete current;
        }//end else


    }
public:
    _search(const T& searchItem) const{
        node<T> *current;
        bool found = false;
        if (root == NULL)
            cerr << "Cannot search the empty tree." << endl;
        else
        {
            current = root;
            while (current != NULL && !found)
            {
                if (current->info == searchItem)
                    found = true;
                else if (current->info > searchItem)
                    current = current->llink;
                else
                    current = current->rlink;
            }//end while
        }//end else
        return found;
    }

    void _insert(const T& insertItem)
    {
        node<T> *current; //pointer to traverse the tree
        node<T> *trailCurrent; //pointer behind current
        node<T> *newNode; //pointer to create the node

        newNode = new node<T> ;
        assert(newNode != NULL);
        newNode->info = insertItem;
        newNode->llink = NULL;
        newNode->rlink = NULL;
        if (root == NULL)
            root = newNode;
        else
        {
            current = root;
            while (current != NULL)
            {
                trailCurrent = current;
                if (current->info == insertItem)
                {
                    cerr << "The insert item is already in the list-";
                    cerr << "duplicates are not allowed."<< insertItem << endl;
                    return;
                }
                else if (current->info > insertItem)
                    current = current->llink;
                else
                    current = current->rlink;
            }//end while
        if (trailCurrent->info > insertItem)
            trailCurrent->llink = newNode;
        else
            trailCurrent->rlink = newNode;
        }
    }



    void deleteNode(const T& deleteItem)
    {
        node<T> *current; //pointer to traverse the tree
        node<T> *trailCurrent; //pointer behind current
        bool found = false;
        if (root == NULL)
            cout << "Cannot delete from the empty tree." << endl;
        else
        {
            current = root;
            trailCurrent = root;
            while (current != NULL && !found)
            {
                if (current->info == deleteItem)
                    found = true;
                else
                {
                    trailCurrent = current;
                    if (current->info > deleteItem)
                        current = current->llink;
                    else
                        current = current->rlink;
                }
            }//end while
            if (current == NULL)
                cout << "The delete item is not in the tree." << endl;
            else if (found)
            {
                if (current == root)
                    deleteFromTree(root);
                else if (trailCurrent->info > deleteItem)
                    deleteFromTree(trailCurrent->llink);
                else
                    deleteFromTree(trailCurrent->rlink);
            }//end if
        }
    }


};


int main()
{
    cout << "Hello world!" << endl;
    return 0;
}

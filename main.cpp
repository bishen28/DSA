#include <iostream>
#include "Tree.hpp"
using namespace std;

int main()
{
	printf("hello world\n");
    int n = 10;
    int arr[10] = {0,1,2,3,4,5,6,7,8,9};
//    for(int i=0;i<n;i++){
//        cin>> arr[i];
//    }
    Tree t;
    t.levelOrderBinaryTree(arr,n);
    t.PrintPreOrder();
    t.PrintPostOrder();
    t.PrintInOrder();
    t.PrintBredthFirst();
    t.PrintDepthFirst();
    int x = t.TreeDepth();
    cout << "depth of tree is:- " << x << endl;;
    Tree *t1 = t.CopyMirrorTree();
    cout << "operation on the copied tree;  ";
    t1->PrintPreOrder();
    cout << t1->numNodes()  << endl;
    cout << "Print all The Path \n\n";
    t.printAllPath();
    cout << "Print  The max Element ";
    cout << t.findMaxBT() << endl;
    cout << "Count full Node ";
    cout << t.numFullNodesBT() << endl;

	return 0;
}

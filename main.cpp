#include <iostream>
//#include <solution191.h>
//#include <solution190.h>
//#include <solution189.h>
//#include <solution007.h>
//#include <solution006.h>
//#include <solution008.h>
//#include <solution009.h>
//#include "solution026.h"
//#include <solution080.h>
//#include "solution217.h"
//#include "solution219.h"
//#include "solution220.h"
//#include "solution138.h"
//#include "solution224.h"
//#include "solution223.h"
//#include "solution222.h"
//#include "solution027.h"
//#include "solution066.h"
//#include "solution088.h"
//#include "solution118.h"
//#include "solution119.h"
//#include "solution169.h"
//#include "Solution225.h"
//#include "solution015.h"
//#include "solution016.h"
//#include "solution018.h"
//#include "solution121.h"
//#include "solution122.h"
//#include "solution123.h"
//#include "solution031.h"
//#include "solution011.h"
//#include "solution105.h"
//#include "solution106.h"
//#include "solution162.h"
//#include "solution062.h"
#include "solution063.h"

using namespace std;

int main()
{
    Solution063 s063;
    vector< vector<int> > vec = {{0,0,0},{0,1,0},{0,0,0}};
    cout<<s063.uniquePathsWithObstacles(vec)<<endl;
//    Solution062 s062;
//    cout<<s062.uniquePaths(2,2)<<endl;
//    Solution162 s162;
//    vector<int> vec = {1, 2, 3, 1};
//    cout<<s162.findPeakElement(vec)<<endl;
//    Solution106 s106;
//    vector<int> v1 = {2,1};
//    vector<int> v2 = {2,1};
////    vector<int> v1 = {2,1,3};
////    vector<int> v2 = {2,3,1};
//    TreeNode* t = s106.buildTree(v1,v2);
//    s106.invisit(t);
//    cout<<endl;
//    s106.postvisit(t);
//    cout<<endl;
//    Solution105 s105;
//    vector<int> v1 = {1,2,3};
//    vector<int> v2 = {2,1,3};
//    TreeNode *t = s105.buildTree(v1,v2);

//    s105.previsit(t);
//    cout<<endl;
//    s105.invisit(t);
//    cout<<endl;
//    Solution011 s011;
//    vector<int> vec = {1,1};
//    cout<<s011.maxArea(vec)<<endl;
//    Solution031 s031;
//    vector<int> vec = {5,1,1};
//    s031.nextPermutation(vec);
//    for(auto i = vec.begin();i!= vec.end();++i)
//        cout<<*i<<" ";
//    cout<<endl;
//    Solution123 s123;
//    vector<int> vec = {2,1,2,3,4,0,5};
//    cout<<s123.maxProfit(vec)<<endl;
//    Solution122 s122;
//    vector<int> vec = {2,1,2,3,4,0,5};
//    cout<<s122.maxProfit(vec)<<endl;
//    Solution121 s121;
//    vector<int> vec = {2,1,2,3,4,0,5};
//    cout<<s121.maxProfit(vec)<<endl;
//    Solution018 s018;
//    vector<int> vec;
//    vec.push_back(1);
//    vec.push_back(0);
//    vec.push_back(-1);
//    vec.push_back(0);
//    vec.push_back(-2);
//    vec.push_back(2);
//    vector< vector<int> > res = s018.fourSum(vec,0);
//    for(auto i = res.begin();i!=res.end();++i)
//    {
//        for(auto j = i->begin();j != i->end();++j)
//        {
//            cout<<*j<<" ";
//        }
//        cout<<endl;
//    }
//    vector<int> vec;
////    Solution015 s015;
//    Solution016 s016;
////    vec.push_back(-1);
//    vec.push_back(1);
//    vec.push_back(1);
//    vec.push_back(1);
//    vec.push_back(0);
//    vec.push_back(-1);
//    vec.push_back(-4);
//    vec.push_back(-1);
//    int r = s016.threeSumClosest(vec,100);
//    cout<<r<<endl;
//    vector< vector<int> > res = s015.threeSum(vec);
//    for(auto i = res.begin();i != res.end();++i)
//    {
//        for(auto j = i->begin();j != i->end();++j)
//            cout<<*j<<" ";
//        cout<<endl;
//    }
//    Stack s;
//    s.push(1);
//    s.push(2);
//    s.pop();
//    cout<<s.top()<<endl;
//    Solution169 s169;
//    vector<int> vec;
//    vec.push_back(19);
//    vec.push_back(19);
//    vec.push_back(19);
//    vec.push_back(19);
//    vec.push_back(19);
//    vec.push_back(19);
//    cout<<s169.majorityElement(vec)<<endl;
//    Solution119 s119;
//    vector<int> res;
//    res = s119.getRow(5);
//    for(int i=0;i<5;++i)
//        cout<<res[i]<<" ";
//    Solution118 s118;
//    vector< vector<int> > res;
//    res = s118.generate(5);
//    for(int i =0;i<5;++i)
//    {
//        vector<int> vec = res[i];
//        int j =0;
//        do{
//            cout<<vec[j--]<<" ";
//        }while(j>=0);
//        cout<<endl;
//    }
//    Solution088 s088;
//    vector<int> v1;
//    v1.push_back(1);
//    v1.push_back(2);
//    v1.push_back(3);
//    v1.push_back(0);
//    v1.push_back(0);
//    v1.push_back(0);
//    vector<int> v2;
//    v2.push_back(2);
//    v2.push_back(5);
//    v2.push_back(6);
//    s088.merge(v1,3,v2,3);
//    vector<int>::iterator it;
//    for(it = v1.begin();it != v1.end();++it)
//        cout<<*it<<" ";
//    cout<<endl;
//    Solution066 s066;
//    vector<int> vec;
////    vec.push_back(9);
//    vec.push_back(1);
//    vec.push_back(0);
//    vector<int> res = s066.plusOne(vec);
//    vector<int>::iterator it = res.begin();
//    for(;it != res.end();++it)
//        cout<<*it<<" ";
//    Solution027 s027;
//    vector<int> vec;
//    vec.push_back(2);
//    vec.push_back(2);
//    vec.push_back(3);
//    vec.push_back(3);
//    vec.push_back(3);

//    vec.push_back(4);
//    vec.push_back(4);
//    vec.push_back(4);
//    vec.push_back(4);
//    cout<<s027.removeElement(vec,3);
//    Solution222 s222;
//    TreeNode *t = new TreeNode(1);
//    cout<<s222.countNodes(t)<<endl;
//    Solution223 s223;
//    int res = s223.computeArea(-3,0,3,4,0,-1,9,2);
////    int res = s223.computeArea(0,0,0,0,-1,-1,1,1);
//    cout<< res<<endl;
//    Solution224 s224;
//    string s = "1+2";
//    int re = s224.calculate(s);
//    cout<<re<<endl;
//    Solution138 s138;
//    RandomListNode *head;
//    head = new RandomListNode(-1);
//    head->random = head;
////    head->next = new RandomListNode(1);
//    RandomListNode *r;
//    r = s138.copyRandomList(head);
//    while(r)
//    {
//        cout<<r->label<< " "<<endl;
//        RandomListNode *pp = r->random;
//        r = r->next;
//    }
//    while(head)
//    {
//        cout<<head->label<<endl;
//        head = head->next;
//    }

//    Solution217 s217;
//    Solution219 s219;
//    Solution220 s220;
//    vector<int> vec;
//    vec.push_back(1);
//    vec.push_back(2);
//    vec.push_back(2);
//    vec.push_back(3);
//    vec.push_back(4);
//    vec.push_back(3);
//    vec.push_back(6);
//    vec.push_back(0);
//    vec.push_back(4);
//    if(s220.containsNearbyAlmostDuplicate(vec,2,2))
//        cout<<"true"<<endl;
//    else
//        cout<<"false"<<endl;
//    if(s219.containsNearbyDuplicate(vec,1))
//        cout<<"True"<<endl;
//    else
//        cout<<"False"<<endl;
    //    vec.push_back(5);
//    if(s217.containsDuplicate(vec))
//        cout<<"True"<<endl;
//    else
//        cout<<"False"<<endl;
//    while(1);
//    Solution080 s080;
//    vector<int> vec;
//    vec.push_back(1);
//    vec.push_back(2);
//    vec.push_back(2);
//    vec.push_back(3);
//    vec.push_back(4);
//    vec.push_back(5);
//    cout<<s080.removeDuplicates(vec)<<endl;
//    Solution026 s026;
//    vector<int> vec;
//    vec.push_back(1);
//    vec.push_back(2);
//    vec.push_back(3);
//    cout<<s026.removeDuplicates(vec)<<endl;
//    Solution191 s191;
//    cout<<s191.hammingWeight(11)<<endl;

//    Solution190 s190;
//    cout<<s190.reverseBits(43261596 )<<endl;

//    Solution189 s189;
//    int nums[] = {1,2,3,4,5,6,7};
//    s189.rotate(nums,7,3);
//    for(int i =0;i<7;++i)
//        cout<<nums[i]<<endl;
//    solution007 s007;
//    cout<<s007.reverse(-123)<<endl;
//    int t = 0x7fffffff;
//    int tt = 0x80000000;
//    cout<<int(t)<<endl;
//    cout<<int(tt)<<endl;
//    Solution006 s006;
//    string s = "PAYPALISHIRING";
//    cout<<s006.convert(s,3)<<endl;

//    Solution008 s008;
//    cout<<s008.atoi("-2147483647")<<endl;

//    Solution009 s009;
//    if(s009.isPalindrome(101))
//        cout<<"Yes"<<endl;
//    else
//        cout<<"No"<<endl;

    return 0;
}

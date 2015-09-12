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
//#include "solution063.h"
//#include "solution120.h"
//#include "solution042.h"
//#include "solution078.h"
//#include "solution090.h"
//#include "solution034.h"
//#include "solution035.h"
//#include "solution054.h"
//#include "solution059.h"
//#include "solution073.h"
//#include "solution228.h"
//#include "solution075.h"
//#include "solution033.h"
//#include "solution081.h"
//#include "solution231.h"
//#include "solution232.h"
//#include "solution242.h"
//#include "solution206.h"
//#include "solution203.h"
//#include "solution263.h"
//#include "solution264.h"
//#include "solution258.h"
//#include "solution257.h"
//#include "solution234.h"
//#include "solution202.h"
//#include "solution235.h"
//#include "solution236.h"
//#include "solution204.h"
//#include "solution205.h"
//#include "solution101.h"
//#include "solution100.h"
//#include "solution102.h"
//#include "solution103.h"
//#include "solution107.h"
//#include "solution104.h"
//#include "solution110.h"
//#include "solution268.h"
//#include "solution136.h"
//#include "solution137.h"
//#include "solution260.h"
//#include "solution004.h"
//#include "solution144.h"
//#include "solution145.h"
//#include "solution171.h"
//#include "solution168.h"
//#include "solution165.h"
//#include "solution278.h"
//#include "solution279.h"
//#include "solution274.h"
//#include "solution275.h"
//#include "solution233.h"
//#include "solution020.h"
#include "solution150.h"

using namespace std;

int main()
{
    Solution150 s150;
    vector<string> vec{"2", "1", "+", "3", "*"};
    cout<<s150.evalRPN(vec)<<endl;
//    Solution020 s020;
//    cout<<s020.isValid("()[]{}")<<endl;
//    Solution233 s233;
//    cout<<s233.countDigitOne(20)<<endl;
//    vector<int> vec{3, 0, 6, 1, 5};
//    vector<int> vec{0,1,3,5,6};
//    vector<int> vec{1};
//    Solution275 s275;
//    cout<<s275.hIndex(vec)<<endl;
//    Solution274 s274;
//    cout<<s274.hIndex(vec)<<endl;
//    Solution279 s279;
//    cout<<s279.numSquares(12)<<endl;
//    Solution278 s278;
//    cout<<s278.firstBadVersion(2)<<endl;
//    Solution165 s165;
//    cout<<s165.compareVersion("1.0","1")<<endl;
//    Solution168 s168;
//    cout<<s168.convertToTitle(703)<<endl;
//    Solution171 s171;
//    cout<<s171.titleToNumber("AAA")<<endl;
//    Solution144 s144;
//    Solution145 s145;
//    TreeNode* root = new TreeNode(1);
//    root->right = new TreeNode(2);
//    root->right->left = new TreeNode(3);
////    vector<int> res = s144.preorderTraversal(root);
//    vector<int> res = s145.postorderTraversal(root);
//    for(int i=0;i<res.size();++i)
//        cout<<res[i]<<" ";
//    cout<<endl;
//    Solution004 s004;
//    vector<int> vec1{5,6};
//    vector<int> vec2{1,2,3,4};
//    cout<<s004.findMedianSortedArrays(vec1,vec2)<<endl;
//    Solution260 s260;
//    vector<int> vec{1,2,1,3,5,2};
//    vector<int> res = s260.singleNumber(vec);
//    cout<<res[0] << " "<<res[1]<<endl;

//    Solution137 s137;
//    vector<int> vec = {1,2,3,4,5,1,2,3,4,1,2,3,4};
//    cout<<s137.singleNumber(vec)<<endl;
//    Solution136 s136;
//    vector<int> vec = {1,2,3,4,5,6,3,4,6,1,2};
//    cout<<s136.singleNumber(vec)<<endl;
//    Solution268 s268;
//    vector<int> vec = {0, 1, 3};
//    cout<<s268.missingNumber(vec)<<endl;
//    Solution102 s102;
//    Solution103 s103;
//    Solution107 s107;
//    Solution104 s104;
//    Solution110 s110;
//    TreeNode* root = new TreeNode(3);
//    root->left = new TreeNode(9);
//    root->right = new TreeNode(20);
//    root->right->left = new TreeNode(15);
//    root->right->right = new TreeNode(7);
//    if(s110.isBalanced(root))
//        cout<<"Yes"<<endl;
//    else
//        cout<<"No"<<endl;
//    cout<<s104.maxDepth(root)<<endl;
//    vector<vector<int> >res = s102.levelOrder(root);
//    vector<vector<int> > res = s103.zigzagLevelOrder(root);
//    vector<vector<int> > res = s107.levelOrderBottom(root);
//    vector<int> layer;
//    for(int i=0;i<res.size();++i)
//    {
//        layer = res[i];
//        for(int j=0;j<layer.size();++j)
//            cout<<layer[j]<<" ";
//        cout<<endl;
//    }
//    Solution100 s100;
//    TreeNode* root1 = new TreeNode(1);
//    TreeNode* root2 = new TreeNode(1);
//    if(s100.isSameTree(root1,root2))
//        cout<<"Yes"<<endl;
//    else
//        cout<<"No"<<endl;
//    Solution101 s101;
//    TreeNode* root = new TreeNode(1);
//    root->left = new TreeNode(2);
//    root->right = new TreeNode(2);
//    root->left->right = new TreeNode(3);
//    root->right->right = new TreeNode(3);
//    if(s101.isSymmetric(root))
//        cout<<"Yes"<<endl;
//    else
//        cout<<"No"<<endl;
//    Solution205 s205;
//    string s = "egg";
//    string t = "foo";
//    if(s205.isIsomorphic(s,t))
//        cout<<"Yes"<<endl;
//    else
//        cout<<"No"<<endl;
//    Solution204 s204;
//    cout<<s204.countPrimes(3)<<endl;
//    Solution235 s235;
//    Solution236 s236;
//    TreeNode* root = new TreeNode(6);
//    root->left = new TreeNode(2);
//    root->right = new TreeNode(8);
//    root->left->left = new TreeNode(0);
//    root->left->right = new TreeNode(4);
//    root->right->left = new TreeNode(7);
//    root->right->right = new TreeNode(9);
//    root->left->right->left = new TreeNode(3);
//    root->left->right->right = new TreeNode(5);

//    TreeNode* p = root->right->left;
//    TreeNode* q = root->right->right;
//    TreeNode* res = s236.lowestCommonAncestor(root,p,q);
//    TreeNode* res = s235.lowestCommonAncestor(root,p,q);
//    cout<<res->val<<endl;
//    Solution081 s081;
//    vector<int> v = {1,3,5};
//    cout<<s081.search(v,1)<<endl;
//    Solution033 s033;

//    Solution202 s202;
//    if(s202.isHappy(20))
//        cout<<"Yes"<<endl;
//    else
//        cout<<"No"<<endl;

//    Solution234 s234;
//    ListNode* head = new ListNode(1);
//    head->next = new ListNode(0);
//    head->next->next = new ListNode(1);
////    head->next->next->next = new ListNode(1);
//    if(s234.isPalindrome(head))
//        cout<<"Yes"<<endl;
//    else
//        cout<<"No"<<endl;

//    TreeNode* root = new TreeNode(-100);
//    root->left = new TreeNode(2);
//    root->right = new TreeNode(3);
//    root->left->left = new TreeNode(4);
//    root->left->left->right = new TreeNode(5);
//    Solution257 s257;
//    vector<string> s = s257.binaryTreePaths(root);
//    for(int i=0;i<s.size();++i)
//        cout<<s[i]<<endl;

//    Solution258 s258;
//    cout<<s258.addDigits(38)<<endl;
//    Solution264 s264;
//    cout<<s264.nthUglyNumber(4)<<endl;
//    Solution263 s263;
//    if(s263.isUgly(14))
//        cout<<"Yes"<<endl;
//    else
//        cout<<"No"<<endl;
//    Solution203 s203;
//    int nums[] = {1,2,2,1};
////    int nums[] = {1 , 2 , 6 , 3 , 4 , 5 , 6};
//    ListNode* head = new ListNode(nums[0]);
//    ListNode *p,*q;
//    q = head;
//    for(int i = 1;i < sizeof(nums)/sizeof(int);++i)
//    {
//        p = new ListNode(nums[i]);
//        q->next = p;
//        q = p;
//    }
//    q=head;
//    while(q != NULL)
//    {
//        cout<<q->val<<"\t";
//        q = q->next;
//    }
//    cout<<endl;
//    q = s203.removeElements(head,2);

//    while(q != NULL)
//    {
//        cout<<q->val<<"\t";
//        q = q->next;
//    }
//    cout<<endl;


//    Solution206 s206;
//    ListNode* head = new ListNode(1);
//    ListNode* p = new ListNode(2);
//    head->next = p;
//    ListNode* q = new ListNode(3);
//    p->next = q;
//    q = head;
//    while(q!= nullptr)
//    {
//        cout<<q->val<<"\t";
//        q = q->next;
//    }
//    cout<<endl;

//    q = s206.reverseList(head);
//    while(q != nullptr)
//    {
//        cout<<q->val<<"\t";
//        q = q->next;
//    }
//    cout<<endl;

//    Solution242 s242;
//    string s = "anagram",t = "nagaram";
//    if(s242.isAnagram(s,t))
//        cout<<"Yes"<<endl;
//    else
//        cout<<"No"<<endl;

//    Solution232 s232;
//    s232.push(1);
//    cout<<s232.peek();

//    Solution231 s231;
//    if(s231.isPowerOfTwo(2))
//        cout<<"Yes"<<endl;
//    else
//        cout<<"No"<<endl;
//    Solution033 s033;
//    vector<int> v={4,5,6,7,0,1,2};
//    cout<<s033.search(v,3)<<endl;

//    vector<int> v = {4 ,5 ,6 ,7 ,0, 1, 2};
//    cout<<s033.search(v,4)<<endl;
//    Solution075 s075;
//    vector<int> v = {0,1,2,0,1,2,0,1,2,0,1,2};
//    s075.sortColors(v);
//    for(int i = 0;i!= v.size();++i)
//        cout<<v[i]<<" ";
//    cout<<endl;
//    Solution228 s228;
//    vector<int> v = {0,3};
//    vector<string> res = s228.summaryRanges(v);
//    for(auto i = res.begin();i!=res.end();++i)
//        cout<<*i<<" ";
//    cout<<endl;
//    Solution073 s073;
//    vector<vector<int>> v = {{1,2,3},{4,0,6},{7,8,9}};
//    for(auto it = v.begin();it != v.end();++it)
//    {
//        for(auto itt = (*it).begin();itt != (*it).end();++itt)
//        {
//            cout<<*itt<<" ";
//        }
//        cout<<endl;
//    }
//    s073.setZeroes(v);
//    for(auto it = v.begin();it != v.end();++it)
//    {
//        for(auto itt = (*it).begin();itt != (*it).end();++itt)
//        {
//            cout<<*itt<<" ";
//        }
//        cout<<endl;
//    }
//    Solution059 s059;
//    vector<vector<int>> res = s059.generateMatrix(3);
//    for(auto it = res.begin();it != res.end();++it)
//    {
//        for(auto itt = (*it).begin();itt != (*it).end();++itt)
//            cout<<*itt<<" ";
//        cout<<endl;
//    }

//    vector<vector<int>> ma = {{1,2,3},{4,5,6},{7,8,9}};
//    vector<vector<int>> ma = {{2,5,8},{4,0,-1}};
//    Solution054 s054;
//    vector<int> res = s054.spiralOrder(ma);
//    for(auto it = res.begin();it != res.end();++it)
//        cout<<*it<<" ";
//    cout<<endl;
//    Solution035 s035;
//    vector<int> v = {1,3};
//    cout<<s035.searchInsert(v,2)<<endl;
//    Solution034 s034;
//    vector<int> v = {1,2,3,4,5};
//    vector<int> res = s034.searchRange(v,0);
//    cout<<res[0]<<" "<<res[1]<<endl;
//    Solution078 s078;
//    vector<int> v = {1,2,3};
//    vector<vector<int>> res = s078.subsets(v);
//    Solution090 s090;
//    vector<int> v = {1,2,2};
//    vector<vector<int>> res = s090.subsetsWithDup(v);

//    auto it = res.begin();
//    for(;it!=res.end();++it)
//    {
//        auto itt = (*it).begin();
//        for(;itt != (*it).end();++itt)
//        {
//            cout<<*itt<<" ";
//        }
//        cout<<endl;
//    }
//    Solution042 s042;
//    vector<int> vec = {0,1,0,2,1,0,1,3,2,1,2,1};
//    cout<<s042.trap(vec)<<endl;
//    Solution120 s120;
////    vector< vector<int> > vec = {{2},{3,4},{6,5,7},{4,1,8,3}};
////    vector< vector<int> > vec = {{-1},{2,3},{1,-1,-3}};
//    vector< vector<int> > vec = {{1},{2,3}};
//    cout<<s120.minimumTotal(vec)<<endl;
//    Solution063 s063;
//    vector< vector<int> > vec = {{0,0,0},{0,1,0},{0,0,0}};
//    cout<<s063.uniquePathsWithObstacles(vec)<<endl;
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

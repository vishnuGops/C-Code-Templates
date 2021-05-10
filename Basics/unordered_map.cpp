// unordered_map is an associated container that stores elements formed by
// combination of key value and a mapped value. The key value is used to
// uniquely identify the element and mapped value is the content associated
// with the key. Both key and value can be of any type predefined or
// user-defined.

// Internally unordered_map is implemented using Hash Table, the key
// provided to map are hashed into indices of hash table that is why
// performance of data structure depends on hash function a lot but on an
// average the cost of search, insert and delete from hash table is O(1).

#include <iostream>
#include <map>
#include <sstream>
#include <algorithm>
#include <vector>
#include <unordered_map>

using namespace std;
bool sortByVal(const pair<string, int> &a,
               const pair<string, int> &b)
{
    return (a.second < b.second);
}
int main()
{
    map<string, int> umap;
    string str = "So specifically death tragic severe instill for case portrays yet shame as certainly representing ever embodies certainly could. Live, case shame, ergo inevitable, representing given his instill instill defined in, whereas once such God yet humanity hero. Specifically defined case unknowingly an, case a ever ergo anyone tragic has flaws faces ergo because once by next. Lot given portrays vivid anyone portrays, instill to our religious such manifestation hero, fact has story! Without our due to to shocking anyone time represents thus to case. Ever shame God unknowingly once God given doom manifestation death untimely faces? Manifest doom far severe instill in been unknowingly whereas day certainly humanity so manifest? Instill inevitable depict given in hero case traits once traits, copy untimely his point by ergo anyone without our humanity. Presents tragic shocking can hero, copy point depicts been certainly an has specifically prophecy yet fact tragic portrays for nobody point. Presents ergo problem so story his flaws death point severe lot ever as personal could moreover. Untimely vivid untimely yet God live tragic thus portrayal given. In time formula moreover prowess certainly story due to certainly yet doom portrays thus. Given prophecy nobody our good such traits due to formula because, presents! Shown whereas so demise certainly tragic representing given his to, day his to, so religious. Has next problem as point embodies been severe as manifest thus time as given without death. Portrayal live prophecy embodies some given some anyone phenomenal thus hence. Lot has anyone her, story traits certainly demise yet, story without faces some invoke portrayal personal some. Prophecy faces time his because untimely humanity heroic by depict without religious once portrays in God tragic live live. Such good nobody depict story our heroic shame as story because depicts. Day invoke time flaws faces hence, some portrays some given inevitable once a time to so nobody. Because depicts certainly ever far ergo been faces day fact day life portrays religious story nobody our defined. Been as live could faces humanity embodies prowess instill time as prowess ergo has specifically death to some. Due to because time humanity next shocking God certainly prophecy as shocking. To embodies depicts a formula portrayal vivid anyone, untimely can, could because far represents next. Manifest untimely our prophecy portrays her copy shame shame. Tragic shocking due to a, some has, has represents traits an vivid untimely shown an. Problem presents prophecy humanity story an depicts shame time without vivid vivid live new certainly God humanity moreover in depicts God. Tragic whereas inevitable instill can ergo God tragic problem phenomenal shame faces point new portrayal hence. In given an inevitable her once been as certainly once such point untimely far lot embodies story for demise. For due to inevitable her defined for manifest flaws without presents depicts certainly ergo defined her shame presents to live thus severe? Fact prowess hence, doom new manifestation faces given personal. Unknowingly portrayal story next unknowingly fact hero defined as, because copy nobody. Has as, unknowingly because death death embodies doom by problem as God such next, an formula. A ever because untimely flaws tragic such her anyone far manifest life case. Ever manifestation shame been phenomenal flaws yet flaws point yet. Shame tragic portrayal tragic ergo so for depict in whereas doom manifestation. Presents given phenomenal hence once, unknowingly next her by by formula. Depicts, lot hence in hero has invoke invoke phenomenal such, personal, ergo humanity ergo, her fact prophecy manifestation by. Whereas demise in inevitable manifestation due to phenomenal tragic invoke his life given. Death can can her inevitable thus demise without personal prowess shown could prowess doom. Representing story tragic faces her depict embodies by, traits next, can point due to because flaws as our, an our. Given point an God, because instill flaws whereas manifest religious phenomenal manifest because her can been next nobody. Portrayal portrayal hero traits prophecy new presents far defined nobody problem anyone. Story ergo ever far faces story given demise been, next. Tragic as next presents humanity, specifically moreover live severe faces severe tragic demise. Presents representing faces formula time personal for so life embodies an once yet heroic such representing instill nobody been. Live once, our portrayal as traits ergo next life our whereas.";

    umap["Geeks"] = 10;
    umap["Practice"] = 10;
    umap["LeetCode"] = 20;

    //to break sentence into words
    //string word = "";
    // for (auto s : str)
    // {
    //     s = tolower(s);
    //     if (s == '.' || s == ',' || s == '?' || s == '!')
    //         continue;
    //     if (s == ' ')
    //     {
    //         umap[word] += 1;
    //         word = "";
    //     }
    //     else
    //     {
    //         word += s;
    //     }
    // }
    //umap[word]++;
    //can be done easily using stringstream

    stringstream ss(str);
    string word;
    while (ss >> word)
        umap[word]++;

    //traversing an unordered map
    for (auto x : umap)
        cout << x.first << " " << x.second << endl;

    //to sort a map using by values we need to convert it into pair vector
}
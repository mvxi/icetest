module level1 {
module level2 {
class coco {
int a;
string b;
};
sequence<coco> cocoseq;

class vivi {
coco c;
string d;
};
sequence<vivi> viviseq;
dictionary<string, vivi> vivimap;
class test {
vivi output(coco c);
};
};

};

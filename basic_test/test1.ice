module level1 {
module level2 {
struct coco {
int a;
string b;
};
sequence<coco> cocoseq;

struct vivi {
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

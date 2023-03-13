#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "OList.h"

OList *l = new OList();

TEST_CASE("Insert tests"){
	l->insert("h");
	l->insert("i");
	l->insert("j");
	l->insert("k");
	l->insert("l");
	CHECK((l->toString()) == "l-->k-->j-->i-->h-->nullptr");
}

TEST_CASE("Contains tests"){
	CHECK(l->contains("h")==1);
	CHECK(l->contains("l")==1);
	CHECK(l->contains("w")==0);
}

TEST_CASE("Get tests"){
	CHECK(l->get(0)=="l");
	CHECK(l->get(3)=="i");
	CHECK(l->get(4)=="h");
}

TEST_CASE("Remove tests"){
	l->insert(2, "r");
	CHECK((l->toString()) == "l-->k-->r-->j-->i-->h-->nullptr");
	l->remove(2);
	CHECK((l->toString()) == "l-->k-->j-->i-->h-->nullptr");
}

TEST_CASE("Reverse tests"){
	l->reverse();
	CHECK((l->toString()) == "h-->i-->j-->k-->l-->nullptr");
	l->reverse();
	CHECK((l->toString()) == "l-->k-->j-->i-->h-->nullptr");
}

TEST_CASE("Destructor tests"){
	delete l;
	l = nullptr;
	CHECK(l==nullptr);
}

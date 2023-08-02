#include "crow_all.h"

crow::response greet()
{
    return crow::response{"Hello world!"};
}
crow::response add(const crow::request &req)
{
    auto input = crow::json::load(req.body);
    int sum = x["first"].i() + x["second"].i();
    return crow::response{"result", sum};
}
crow::response subtract(const crow::request &req)
{
    auto input = crow::json::load(req.body);
    int diff = x["first"].i() - x["second"].i();
    return crow::response{"result", diff};
}
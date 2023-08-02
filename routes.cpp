#include "crow_all.h"

crow::response greet()
{
    return crow::response{200, "Hello world!"};
}
crow::response add(const crow::request &req)
{
    auto input = crow::json::load(req.body);
    int sum = input["first"].i() + input["second"].i();
    crow::json result = {"result", sum};
    return crow::response{200, result};
}
crow::response subtract(const crow::request &req)
{
    auto input = crow::json::load(req.body);
    int diff = input["first"].i() - input["second"].i();
    crow::json resp = {"result", diff};
    return crow::response{200, resp};
}
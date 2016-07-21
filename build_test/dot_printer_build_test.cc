#include <iostream>
#include "ast.pb.h"
#include "dot_printer.h"
#include "labeled_graph.h"
#include "type.h"

int main(int argc, char **argv) {
  logle::LabeledGraph graph;
  logle::AST ast = logle::ast::type::MakeInt("int label", false);
  graph.Initialize({}, {}, {}, {}, ast);
  logle::DotPrinter dot_printer;
  std::cout << dot_printer.DotGraph(graph) << std::endl;
}
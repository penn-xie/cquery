class Foo;
class Foo;
class Foo {};
class Foo;

/*
// NOTE: Separate decl/definition are not supported for classes. See source
//       for comments.
OUTPUT:
{
  "includes": [],
  "skipped_by_preprocessor": [],
  "types": [{
      "id": 0,
      "usr": 15041163540773201510,
      "detailed_name": "Foo",
      "short_name_offset": 0,
      "short_name_size": 3,
      "kind": 7,
      "definition_spelling": "3:7-3:10",
      "definition_extent": "3:1-3:13",
      "parents": [],
      "derived": [],
      "types": [],
      "funcs": [],
      "vars": [],
      "instances": [],
      "uses": ["1:7-1:10", "2:7-2:10", "4:7-4:10"]
    }],
  "funcs": [],
  "vars": []
}
*/

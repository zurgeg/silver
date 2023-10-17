# *Silver*
Reimplementation of the GoldSrc engine

## Compatibility/Status
WIP. My goal is to get Cry of Fear running, since that's the only GoldSrc game I own (due to it being free)

## Contributing
Just follow Wine's [Clean Room Guidelines](https://wiki.winehq.org/Clean_Room_Guidelines) and you should be (legally) fine

## (Re)generating `include/halflife` and the `src` directory structure
You really shouldn't, as we modify Valve's header files to be able to work with our directory structure

Run `tree -dfi --noreport . | awk 'system("mkdir /path/to/silver/include/halflife/" $0)' && tree --noreport -fi . | awk '/\.h$/ { system("cp " $0 " /path/to/silver/include/halflife/" $0) }'` while in `halflife`'s root directory.
`awk` is used due to me not knowing of a better way, but I'm sure there is.

*Some people, when confronted with a problem, think "I know, I'll use regular expressions." Now they have two problems.* - Jamie Zawinski

The same could probably be said for `awk`, but oh well.

You can also use the first half to generate the directory structure for `src`: `tree -dfi --noreport . | awk 'system("mkdir /path/to/silver/src/" $0)'`, which is how I did it. As with before, you need to be in the `include/halflife` directory.

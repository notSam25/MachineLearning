# CatsOrDogs?
> This project is a machine learning project built in c++ to tell between a cat or dog via a URL image.
# Building and Usage
 To use this project build the binary and input a URL of an image of a cat/dog. It will return 0 for a dog or 1 for a cat.
 This project proved to be accurate 73% of the time with 100 trials and random google.com image data.
 Example of building with clang++ version 10.0.0.0
 ```
 clang++ src/entry.cpp -o build; ./build; echo $?
 ```
# Media
 <img src="https://cdn.discordapp.com/attachments/764959698888687616/960583593757921330/Screenshot_from_2022-04-04_11-55-17.png" /img>
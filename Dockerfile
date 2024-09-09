FROM ubuntu:20.04

RUN apt-get update && apt-get install -y \

    g++ \

    cmake \

    && rm -rf /var/lib/apt/lists/*

WORKDIR /app
COPY . /app
RUN g++ src/main.cpp -o ShapeTemplate
CMD ./ShapeTemplate && rm ShapeTemplate



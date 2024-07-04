FROM ubuntu:20.04

RUN apt-get update && apt-get install -y \

    g++ \

    cmake \

    && rm -rf /var/lib/apt/lists/*

WORKDIR /app
COPY . /app
RUN chmod +x run_shapes.sh
CMD ["./run_shapes.sh"]



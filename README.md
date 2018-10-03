# spekle-core

- Manages workers.
- Synchronises frames (both for incoming raw data as well as the generated scene).
- Handles communication (middleware).


### System Architecture

![alt text](https://github.com/noorvir-a/spekle-core/blob/master/docs/architecture.jpg)


### Working with Docker

To set-up your development environment with docker build the spekle-core docker image (which is a derivate of ros:lunar-robot) by running ```docker build --rm -f "dockerenv/Dockerfile" -t spekle-core:latest dockerenv``` from the spekle-core directory. This will a docker image called spekle-core:latest. You can then run this image with docker compose using ```docker-compose run --rm spekle-core```. This adds some additional components to the docker container including mounting the spekle-core directory and exposing ports to/from the container. 

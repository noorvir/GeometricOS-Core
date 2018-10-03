# Get the base ROS image from Docker Hub
FROM ros:lunar-robot

# Update apps on the base image
RUN apt-get update -qq && \
    apt-get upgrade -qq && \
    apt-get install -qq build-essential clang && \
    apt-get install -qq curl git htop man unzip vim wget nano

# Copy the current folder which contains C++ source code to the Docker image under /usr/src
# COPY . /usr/spekle-core/
RUN mkdir -p /usr/spekle-core

# Specify the working directory
WORKDIR /usr/spekle-core/

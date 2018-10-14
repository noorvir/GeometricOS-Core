# spekle-core

- Manages workers.
- Synchronises frames (both for incoming raw data as well as the generated scene).
- Handles communication (middleware).


### System Architecture

![alt text](https://github.com/noorvir-a/spekle-core/blob/master/docs/architecture.jpg)


### Working with Docker

To set-up your development environment with docker build the spekle-core docker image (which is a derivate of ros:lunar-robot) by running ```docker build --rm -f "dockerenv/Dockerfile" -t spekle-core:latest dockerenv``` from the spekle-core directory. This will a docker image called spekle-core:latest. You can then run this image with docker compose using ```docker-compose run --rm spekle-core```. This adds some additional components to the docker container including mounting the spekle-core directory and exposing ports to/from the container. 


#### Setting-up a GUI 

From the host machine, add the local host to the xhost list:

```xhost + 127.0.0.1```

Now when running the docker conatainer export the display by using the -e option:

```docker run -it -e DISPLAY=host.docker.internal:0 -v /tmp/.X11-unix:/tmp/.X11-unix <container:name>```

Or if you're already running the container, export the DNS name for host resolution to the DISPLAY environment variable from the command line:

```export DISPLAY=host.docker.internal:0```

Once you're done using the container, *__don't forget to remove the localhost from the xhost list!__* It can leave some security vunerabilities. 

#### Useful Docker Commands

- Start an existing container:
    ```docker start <container_name>```
- Connect to _started_ container: 
    ```docker exec -it <container_name> /bin/bash```


### Working with ROS

If you get errors like ```bash: rqt: command not found``` make sure you have the ROS_PACKAGE_PATH in your envornment variables:

```bash
echo $ROS_PACKAGE_PATH
/opt/ros/lunar/share
```

If this is not the case, run ```source /opt/ros/lunar/setup.bash```
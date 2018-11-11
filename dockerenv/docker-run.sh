# get image name from arguments

# if run with display
docker run -it -e DISPLAY=host.docker.internal:0 \
    -v /tmp/.X11-unix:/tmp/.X11-unix \
    -v "$(pwd)/../":/usr/spekle-core/ \
    spekle-core 
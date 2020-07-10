FROM gcc:latest

COPY dump.cpp .
RUN g++ -o app dump.cpp

ENTRYPOINT ["./app"]

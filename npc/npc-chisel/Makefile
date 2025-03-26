# Generate Verilog code
doit:
	sbt run
	./process.sh ../vsrc/generated/Core.sv

# Run the test
test:
	sbt test

clean:
	rm -rf ./generated ./project ./target ./test_run_dir


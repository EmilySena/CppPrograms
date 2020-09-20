.PHONY: clean All

All:
	@echo "----------Building project:[ Challenge11 - Debug ]----------"
	@cd "Challenge11" && "$(MAKE)" -f  "Challenge11.mk"
clean:
	@echo "----------Cleaning project:[ Challenge11 - Debug ]----------"
	@cd "Challenge11" && "$(MAKE)" -f  "Challenge11.mk" clean

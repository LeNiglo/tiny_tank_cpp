C_DIR = c_dir

S_DIR = s_dir

all: $(S_DIR) $(C_DIR)

$(C_DIR) client:
		$(MAKE) -C $(C_DIR) re
		@$(MAKE) -C $(C_DIR) clean

$(S_DIR) server:
		$(MAKE) -C $(S_DIR) re
		@$(MAKE) -C $(S_DIR) clean

clean:
		@$(MAKE) -C $(C_DIR) clean
		@$(MAKE) -C $(S_DIR) clean

fclean:         clean
		@$(MAKE) -C $(C_DIR) fclean
		@$(MAKE) -C $(S_DIR) fclean


.PHONY: $(C_DIR) $(S_DIR) all clean fclean

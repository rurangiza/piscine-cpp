MSG	=	updated
push:
	git add .
	git commit -m "$(MSG)"
	git push
purge:
	find . -name ".DS_Store" -delete




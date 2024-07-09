# Project Report: Building a Custom Chatbot using Intel Extension for Transformers

This project aims to build a custom chatbot using Hugging Face models and Intel Extension for Transformers. The following steps will guide you through setting up the environment, installing necessary dependencies, and running the project.

## Table of Contents
1. [Environment Setup](#environment-setup)
2. [Installation](#installation)
3. [Running the Project](#running-the-project)
4. [Conclusion](#conclusion)

## Environment Setup

First, we need to create and activate a new Conda environment.

bash
# Create a new Conda environment with Python 3.10
conda create -n itrex python=3.10

# Activate the environment
conda activate itrex


## Installation


Next, we will install the Intel Extension for Transformers and its dependencies.

```bash
Copy code
# Install Intel Extension for Transformers
pip install intel-extension-for-transformers

# Clone the Intel Extension for Transformers repository
git clone https://github.com/intel/intel-extension-for-transformers.git

# Navigate to the neural chat directory
cd intel-extension-for-transformers/intel_extension_for_transformers/neural_chat/

# Install CPU-specific requirements
pip install -r requirements_cpu.txt

# Install additional requirements
pip install -r requirements.txt
```


## Running the Project

To interact with Hugging Face models, log in to the Hugging Face CLI and set up Jupyter and IPython kernel.

```bash
Copy code
# Log in to Hugging Face
huggingface-cli login

# Install Jupyter and IPython kernel
python3 -m pip install jupyter ipykernel

# Add kernel for its environment
python3 -m ipykernel install --name neural-chat --user

# Log in to Hugging Face again if required

huggingface-cli login
```

## Conclusion

This project demonstrates how to set up a custom chatbot using Hugging Face models and Intel Extension for Transformers. The steps outlined provide a clear guide for setting up the environment, installing necessary dependencies, and running the project.

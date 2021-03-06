.. -*- rst -*-

================================
Volume actions (volumes, action)
================================

Extends the size of, resets statuses for, sets image metadata for,
and removes image metadata from a volume. Attaches a volume to a
server, detaches a volume from a server, and removes a volume from
Block Storage management without actually removing the back-end
storage object associated with it.


Extend volume size
==================

.. rest_method::  POST /v2/{tenant_id}/volumes/{volume_id}/action

Extends the size of a volume to a requested size, in gibibytes (GiB). Specify the ``os-extend`` action in the request body.

Preconditions

- Volume status must be ``available``.

- Sufficient amount of storage must exist to extend the volume.

- The user quota must have sufficient volume storage.

Troubleshooting

- An ``error_extending`` volume status indicates that the request
  failed. Ensure that you meet the preconditions and retry the
  request. If the request fails again, investigate the storage back
  end.

Error response codes:202,


Request
-------

.. rest_parameters:: parameters.yaml

   - os-extend: os-extend
   - new_size: new_size
   - tenant_id: tenant_id
   - volume_id: volume_id

Request Example
---------------

.. literalinclude:: ../samples/volumes/volume-extend-request.json
   :language: javascript







Reset volume statuses
=====================

.. rest_method::  POST /v2/{tenant_id}/volumes/{volume_id}/action

Resets the status, attach status, and migration status for a volume. Specify the ``os-reset_status`` action in the request body.

Error response codes:202,


Request
-------

.. rest_parameters:: parameters.yaml

   - status: status
   - migration_status: migration_status
   - os-reset_status: os-reset_status
   - attach_status: attach_status
   - tenant_id: tenant_id
   - volume_id: volume_id

Request Example
---------------

.. literalinclude:: ../samples/volumes/volume-status-reset-request.json
   :language: javascript







Set image metadata for volume
=============================

.. rest_method::  POST /v2/{tenant_id}/volumes/{volume_id}/action

Sets the image metadata for a volume. Specify the ``os-set_image_metadata`` action in the request body.

Error response codes:202,


Request
-------

.. rest_parameters:: parameters.yaml

   - os-set_image_metadata: os-set_image_metadata
   - metadata: metadata
   - tenant_id: tenant_id
   - volume_id: volume_id

Request Example
---------------

.. literalinclude:: ../samples/volumes/volume-image-metadata-set-request.json
   :language: javascript







Remove image metadata from volume
=================================

.. rest_method::  POST /v2/{tenant_id}/volumes/{volume_id}/action

Removes image metadata, by key, from a volume. Specify the ``os-unset_image_metadata`` action in the request body and the ``key`` for the metadata key and value pair that you want to remove.

Error response codes:202,


Request
-------

.. rest_parameters:: parameters.yaml

   - os-unset_image_metadata: os-unset_image_metadata
   - key: key
   - tenant_id: tenant_id
   - volume_id: volume_id

Request Example
---------------

.. literalinclude:: ../samples/volumes/volume-image-metadata-unset-request.json
   :language: javascript







Attach volume to server
=======================

.. rest_method::  POST /v2/{tenant_id}/volumes/{volume_id}/action

Attaches a volume to a server. Specify the ``os-attach`` action in the request body.

Preconditions

- Volume status must be ``available``.

- You should set ``instance_uuid`` or ``host_name``.

Error response codes:202,


Request
-------

.. rest_parameters:: parameters.yaml

   - instance_uuid: instance_uuid
   - mountpoint: mountpoint
   - host_name: host_name
   - os-attach: os-attach
   - tenant_id: tenant_id
   - volume_id: volume_id

Request Example
---------------

.. literalinclude:: ../samples/volumes/volume-attach-request.json
   :language: javascript







Unmanage volume
===============

.. rest_method::  POST /v2/{tenant_id}/volumes/{volume_id}/action

Removes a volume from Block Storage management without removing the back-end storage object that is associated with it. Specify the ``os-unmanage`` action in the request body.

Preconditions

- Volume status must be ``available``.

Error response codes:202,


Request
-------

.. rest_parameters:: parameters.yaml

   - os-unmanage: os-unmanage
   - tenant_id: tenant_id
   - volume_id: volume_id

Request Example
---------------

.. literalinclude:: ../samples/volumes/volume-unmanage-request.json
   :language: javascript







Force detach volume
===================

.. rest_method::  POST /v2/{tenant_id}/volumes/{volume_id}/action

Forces a volume to detach. Specify the ``os-force_detach`` action in the request body.

Rolls back an unsuccessful detach operation after you disconnect
the volume.

Error response codes:202,


Request
-------

.. rest_parameters:: parameters.yaml

   - connector: connector
   - attachment_id: attachment_id
   - os-force_detach: os-force_detach
   - tenant_id: tenant_id
   - volume_id: volume_id

Request Example
---------------

.. literalinclude:: ../samples/volumes/volume-force-detach-request.json
   :language: javascript







Promote replicated volume
=========================

.. rest_method::  POST /v2/{tenant_id}/volumes/{volume_id}/action

Promotes a replicated volume. Specify the ``os-promote-replica`` action in the request body.

Error response codes:202,


Request
-------

.. rest_parameters:: parameters.yaml

   - os-promote-replica: os-promote-replica
   - tenant_id: tenant_id
   - volume_id: volume_id

Request Example
---------------

.. literalinclude:: ../samples/volumes/volume-replica-promote-request.json
   :language: javascript







Reenable volume replication
===========================

.. rest_method::  POST /v2/{tenant_id}/volumes/{volume_id}/action

Re-enables replication of a volume. Specify the ``volume-replica-reenable`` action in the request body.

Error response codes:202,


Request
-------

.. rest_parameters:: parameters.yaml

   - os-reenable-replica: os-reenable-replica
   - size: size
   - os-volume-replication:driver_data: os-volume-replication:driver_data
   - os-volume-replication:extended_status: os-volume-replication:extended_status
   - tenant_id: tenant_id
   - volume_id: volume_id

Request Example
---------------

.. literalinclude:: ../samples/volumes/volume-replica-reenable-request.json
   :language: javascript






